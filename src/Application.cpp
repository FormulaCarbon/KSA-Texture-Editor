#include "Application.h"
#include "Configurator.h"
#include "Viewport.h"
#include "Menubar.h"

#include "imgui.h"

namespace Application
{
	void CreateDockspace()
	{
		ImGui::DockSpaceOverViewport(0, ImGui::GetMainViewport());
	}
	void RenderUI()
	{

		CreateDockspace();

		Configurator::RenderUI();
		Viewport::RenderUI();
		Menubar::RenderMenuBar();
	}
}