#include "InheritedObject.h"

InheritedObject::InheritedObject()
	: BaseObject()		// �������q���X�g�ł́A�p�����N���X�̃R���X�g���N�^�����s�ł���
	, _bValue( true )	// �����o�萔�́A�������q���X�g�ł̂ݒl��ݒ�ł���B
{
	// Error: �萔�͏������q���X�g�ł̂ݒl��ݒ�ł���B
	// _bValue = true;
}

InheritedObject::~InheritedObject() {

}

void InheritedObject::updateFunc() {

}

void InheritedObject::updateValue() {
	// [C++11] auto	: �E�Ӓl�����āA�^�𐄘_����B���_�o���Ȃ��ꍇ�̓G���[�ɂȂ�B
	auto addValue = 10;
	_value += addValue;
}