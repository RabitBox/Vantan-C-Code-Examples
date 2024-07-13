#pragma once

// 継承する場合はインクルード必須
#include "BaseObject.h"

// 以降継承を禁止する場合、final をクラス名の後ろにつける
class InheritedObject final : public BaseObject
{
public:
	// コンストラクタ、デストラクタの定義はヘッダー内で書かない
	InheritedObject();
	~InheritedObject();

public:
	// 継承元のメンバ関数と同名の関数を上書きする場合は override を記述する。
	// 継承先に合わせた実装に上書きができる。
	void updateFunc() override;

	// 特定の関数のみ、以降 override を禁止する場合は、final を記述する。
	void updateValue() final;

private:
	// const をつけることで、メンバ定数を定義できる。
	const bool _bValue;
};

