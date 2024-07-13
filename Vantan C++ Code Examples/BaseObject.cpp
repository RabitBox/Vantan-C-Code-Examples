#include "BaseObject.h"

// メンバ変数の初期化は : から繋げて記述する 初期化子リスト を可能な限り使用する。
// 複数のメンバが存在する場合は , で区切って複数記述できる。
BaseObject::BaseObject()
	: _value(0) {

}


// メンバ関数の定義は、cppファイル内で書く
void BaseObject::updateValue() {
	++_value;
}