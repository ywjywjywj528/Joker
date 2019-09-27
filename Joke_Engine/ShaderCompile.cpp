#include "ShaderCompile.h"
NS_JE_BEGIN

GLuint ShaderCompile::CompileFromString(const char* vertexshader, const char*fragshader)
{
	GLuint vertexId;
	GLuint fragId;
	GLint success;
	GLint length;
	char* infoLog;
	vertexId = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(GL_VERTEX_SHADER, 1, &vertexshader, NULL);
	glCompileShader(vertexId);
	glGetShaderiv(vertexId, GL_COMPILE_STATUS, &success);
	if (success != GL_TRUE)
	{
		glGetShaderiv(vertexId, GL_INFO_LOG_LENGTH, &length);
		if (length == 0)
		{
			length = 4096;
		}
		if (length > 0)
		{
			infoLog = new char[length];
			glGetShaderInfoLog(vertexId, length, NULL, infoLog);
			infoLog[length - 1] = '\0';
		}

		printf("Compile failed for vertex shader with error '%s'.",infoLog);
		JE_DELETE_ARRAY(infoLog);

		// Clean up.
		glDeleteShader(vertexId);

		return -1;
	}

	fragId = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(GL_FRAGMENT_SHADER, 1, &fragshader, NULL);
	glCompileShader(fragId);
	glGetShaderiv(fragId, GL_COMPILE_STATUS, &success);
	if (success != GL_TRUE)
	{
		glGetShaderiv(fragId, GL_INFO_LOG_LENGTH, &length);
		if (length == 0)
		{
			length = 4096;
		}
		if (length > 0)
		{
			infoLog = new char[length];
			glGetShaderInfoLog(fragId, length, NULL, infoLog);
			infoLog[length - 1] = '\0';
		}

		printf("Compile failed for vertex shader with error '%s'.", infoLog);
		JE_DELETE_ARRAY(infoLog);

		// Clean up.
		glDeleteShader(fragId);

		return -1;
	}

	GLuint progameid =  glCreateProgram();
	glAttachShader(progameid, vertexId);
	glAttachShader(progameid, fragId);
}
NS_JE_END
