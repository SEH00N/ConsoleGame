#include "Engine.h"
#include "Project.h"

int main()
{
	//while (true)
	//{
	//	BYTE arr[256] = { 0 };
	//	GetKeyState(0);

	//	if (GetKeyboardState(arr))
	//	{
	//		for (int i = 0; i < 256; ++i)
	//		{
	//			int temp = (int)arr[i];
	//			if (temp & 0x80)
	//				std::cout << i;
	//		}

	//		std::cout << '\n';
	//		Sleep(3000);
	//	}
	//}

	//SetConsoleCursor(false);
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
		//system("cls");
		scene.Update();
		//if (Input::GetInstance()->GetKeyDown(KeyCode::Left))
		//	std::cout << "asdasd";
		//scene.Render();
		Sleep(5000);
	}
	
	scene.Release();

	return 0;
}