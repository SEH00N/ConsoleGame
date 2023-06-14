#include "Engine.h"

int main()
{
	Camera cam({ 10, 10 });
	Scene scene(&cam);

	GameObject player('бс');
	scene.AddGameObject(&player);
	
	scene.Init();

	while (true)
	{
		scene.Update();
		Sleep(1 / 60);
	}
	
	scene.Release();

	return 0;
}