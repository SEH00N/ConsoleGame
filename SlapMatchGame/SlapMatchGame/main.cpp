#include "Engine.h"
#include "Project.h"

int main()
{
	SetConsoleCursor(false);
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);

	Camera cam({ 15, 15 });
	Scene scene(&cam);

	GameObject player("бс");
	player.SetPosition(0, 0);

	PlayerMovement playerMovement;
	player.AddComponent(&playerMovement);

	scene.AddGameObject(&player);
	
	scene.Init();

	while (true)
	{
		scene.Update();
		scene.Render();
		Sleep(DeltaTime);
	}
	
	scene.Release();

	return 0;
}