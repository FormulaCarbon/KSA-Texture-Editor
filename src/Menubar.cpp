#include "Menubar.h"

#include "imgui.h"

namespace Menubar
{
	void RenderMenuBar()
	{
		if (ImGui::BeginMainMenuBar())
		{
			ImGui::EndMainMenuBar();
		}
	}
}