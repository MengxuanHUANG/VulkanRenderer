#version 450

layout(location = 0) in vec3 vs_Color;

layout(location = 0) out vec4 outColor;

void main()
{
	outColor = vec4(vs_Color, 1.f);
}