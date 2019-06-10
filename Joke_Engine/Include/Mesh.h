#pragma once
namespace Joker
{
	class Mesh
	{
	public:
		static Mesh* CreateFromFile(const char* _filePath);

	private:
		Mesh();
		~Mesh();
	};
}
