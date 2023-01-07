#pragma once

namespace ttt
{
	class State 
	{
	public:
		virtual void Init() = 0;
		virtual void HandleInp() = 0;
		virtual void Update() = 0;
		virtual void Draw(float dt) = 0;
		virtual void Pause() {};
		virtual void Resume() {};

	};
}