#include "BaseObject.h"

// �����o�ϐ��̏������� : ����q���ċL�q���� �������q���X�g ���\�Ȍ���g�p����B
// �����̃����o�����݂���ꍇ�� , �ŋ�؂��ĕ����L�q�ł���B
BaseObject::BaseObject()
	: _value(0) {

}


// �����o�֐��̒�`�́Acpp�t�@�C�����ŏ���
void BaseObject::updateValue() {
	++_value;
}