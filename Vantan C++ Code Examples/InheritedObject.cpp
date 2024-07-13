#include "InheritedObject.h"

InheritedObject::InheritedObject()
	: BaseObject()		// 初期化子リストでは、継承元クラスのコンストラクタを実行できる
	, _bValue( true )	// メンバ定数は、初期化子リストでのみ値を設定できる。
{
	// Error: 定数は初期化子リストでのみ値を設定できる。
	// _bValue = true;
}

InheritedObject::~InheritedObject() {

}

void InheritedObject::updateFunc() {

}

void InheritedObject::updateValue() {
	// [C++11] auto	: 右辺値を見て、型を推論する。推論出来ない場合はエラーになる。
	auto addValue = 10;
	_value += addValue;
}