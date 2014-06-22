#pragma once
#include <stdio.h>
#include <string.h>
#include <vector>
#include <glm/glm.hpp>


using namespace std;

class ObjLoader
{
public:
	typedef struct 
	{
		std::vector<glm::vec3> vertices;
		std::vector<glm::vec2> uvs;
		std::vector<glm::vec3> normals; // Won't be used at the moment.
	}objectInfo;
		
	ObjLoader(void);
	~ObjLoader(void);
	void LoadObj(char * path); 
};

