#pragma once

class SceneManager;
class InputState;

class SceneBase
{
public:
	SceneBase(SceneManager& manager);
	virtual ~SceneBase();

	virtual void Initialize();
	virtual void Update(const InputState& input);
	virtual void Draw();
	virtual void Finalize();

protected:
	virtual bool IsTransScene(const InputState& inputState) { return false; }

	SceneManager& manager_;
};


