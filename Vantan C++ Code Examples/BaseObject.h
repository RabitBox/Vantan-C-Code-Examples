#pragma once

// クラスは、特別な事情がない限りは h ファイル内で定義する。
class BaseObject
{
public:
	BaseObject();

	// default指定することで、暗黙定義されるものを明示的に定義する。
	// コンストラクタを書かなかった場合と挙動は同じ。
	// 継承が想定されるクラスのデストラクタは virtual を必ず記述する。
	// virtual にしなかった場合、継承先のデストラクタが実行されない可能性がある。
	virtual ~BaseObject() = default;


	// 継承先では使用するが、クラス外部に公開しないメンバは protected
protected:
	int _value;


	// 外部でも使用する可能性のあるメンバは public
public:
	//         const	: 関数名の後ろに書いた場合、メンバ変数を書き変えないことを保証
	// [C++11] noexcept	: エラーや例外が出ないことが分かりきっていることを保証
	// クラス定義内で関数を定義した場合、暗黙的に inline になる
	int getValue() const noexcept { return _value; }


	// メンバ変数を書き換える場合は const を書けない
	void setValue(int value) noexcept { _value = value; }


	// virtual	: 仮想関数の定義。継承先で上書きが可能になる。
	// クラスの定義内では、原則メンバ関数の定義をするべきではない。
	virtual void updateValue();


	// 末尾に "= 0;" を記述することで、純粋仮想関数となる。
	// 純粋仮想関数は、継承先で override をしなければならない。※使用しないとエラーにならない
	virtual void updateFunc() = 0;
};

