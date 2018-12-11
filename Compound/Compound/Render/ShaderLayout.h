
/*
	2018.12.11
	Created by AcrylicShirmp.
*/

#ifndef _CLASS_COMPOUND_RENDER_MESH_H

#define _CLASS_COMPOUND_RENDER_MESH_H

#include <cstddef>
#include <cstdint>

namespace Compound::Render
{
	class ShaderLayout final
	{
	public:
		enum class Type : std::size_t
		{
			Bool,
			Int32,
			UInt32,
			Single,
			Double
		};

		enum class Shape : std::size_t
		{
			Scalar,
			Vec2,
			Vec3,
			Vec4,
			Mat22,
			Mat23,
			Mat24,
			Mat32,
			Mat33,
			Mat34,
			Mat42,
			Mat43,
			Mat44
		};

	private:
		Type eType;
		Shape eShape;
		std::size_t nOffset;
		std::size_t nStride;

	public:
		ShaderLayout(Type eType, Shape eShape);
		ShaderLayout(Type eType, Shape eShape, std::size_t nOffset, std::size_t nStride);
		ShaderLayout(const ShaderLayout &sSrc) = default;
		~ShaderLayout() = default;

	public:
		ShaderLayout &operator=(const ShaderLayout &sSrc) = default;

	public:
		inline Type type() const;
		inline Shape shape() const;
		inline std::size_t offset() const;
		inline std::size_t stride() const;
		inline std::size_t elementSize() const;
		inline std::size_t elementNum() const;
		static inline constexpr std::size_t elementSize(Type eType);
		static inline constexpr std::size_t elementNum(Shape eShape);
	};

	inline ShaderLayout::Type ShaderLayout::type() const
	{
		return this->eType;
	}

	inline ShaderLayout::Shape ShaderLayout::shape() const
	{
		return this->eShape;
	}

	inline std::size_t ShaderLayout::offset() const
	{
		return this->nOffset;
	}

	inline std::size_t ShaderLayout::stride() const
	{
		return this->nStride;
	}
	
	inline std::size_t ShaderLayout::elementSize() const
	{
		return ShaderLayout::elementSize(this->eType);
	}

	inline std::size_t ShaderLayout::elementNum() const
	{
		return ShaderLayout::elementNum(this->eShape);
	}

	inline constexpr std::size_t ShaderLayout::elementSize(Type eType)
	{
		switch (eType)
		{
		case Type::Bool:
			return sizeof(bool);

		case Type::Int32:
			return sizeof(std::int32_t);

		case Type::UInt32:
			return sizeof(std::uint32_t);

		case Type::Single:
			return sizeof(float);

		case Type::Double:
			return sizeof(double);

		default:
			return 0;
		}
	}

	inline constexpr std::size_t ShaderLayout::elementNum(Shape eShape)
	{
		switch (eShape)
		{
		case Shape::Scalar:
			return 1;

		case Shape::Vec2:
			return 2;

		case Shape::Vec3:
			return 3;
		
		case Shape::Vec4:
		case Shape::Mat22:
			return 4;

		case Shape::Mat23:
		case Shape::Mat32:
			return 6;

		case Shape::Mat24:
		case Shape::Mat42:
			return 8;

		case Shape::Mat33:
			return 9;

		case Shape::Mat34:
		case Shape::Mat43:
			return 12;

		case Shape::Mat44:
			return 16;

		default:
			return 0;
		}
	}
}

#endif