#include "PlayerMovement.h"

void PlayerMovement::Init()
{

}

void PlayerMovement::Update()
{
	Vector2 moveDir;

	if (Input::GetInstance()->GetKeyDown(KeyCode::Left))
	{
		moveDir.x -= 1;
		std::cout << "left";
	}
	if (Input::GetInstance()->GetKeyDown(KeyCode::Right))
		moveDir.x += 1;
	if (Input::GetInstance()->GetKeyDown(KeyCode::Up))
		moveDir.y += 1;
	if (Input::GetInstance()->GetKeyDown(KeyCode::Down))
		moveDir.y -= 1;

	Vector2 curPos = gameObject->GetPosition();
	gameObject->SetPosition(curPos + moveDir);
	std::cout << gameObject->GetPosition().x << ' ' << gameObject->GetPosition().y << ' ';
	std::cout << moveDir.x << ' ' << moveDir.y;
}

void PlayerMovement::Release()
{
}
