#pragma once

// �N���X�́A���ʂȎ���Ȃ������ h �t�@�C�����Œ�`����B
class BaseObject
{
public:
	BaseObject();

	// default�w�肷�邱�ƂŁA�Öْ�`�������̂𖾎��I�ɒ�`����B
	// �R���X�g���N�^�������Ȃ������ꍇ�Ƌ����͓����B
	// �p�����z�肳���N���X�̃f�X�g���N�^�� virtual ��K���L�q����B
	// virtual �ɂ��Ȃ������ꍇ�A�p����̃f�X�g���N�^�����s����Ȃ��\��������B
	virtual ~BaseObject() = default;


	// �p����ł͎g�p���邪�A�N���X�O���Ɍ��J���Ȃ������o�� protected
protected:
	int _value;


	// �O���ł��g�p����\���̂��郁���o�� public
public:
	//         const	: �֐����̌��ɏ������ꍇ�A�����o�ϐ��������ς��Ȃ����Ƃ�ۏ�
	// [C++11] noexcept	: �G���[���O���o�Ȃ����Ƃ������肫���Ă��邱�Ƃ�ۏ�
	// �N���X��`���Ŋ֐����`�����ꍇ�A�ÖٓI�� inline �ɂȂ�
	int getValue() const noexcept { return _value; }


	// �����o�ϐ�������������ꍇ�� const �������Ȃ�
	void setValue(int value) noexcept { _value = value; }


	// virtual	: ���z�֐��̒�`�B�p����ŏ㏑�����\�ɂȂ�B
	// �N���X�̒�`���ł́A���������o�֐��̒�`������ׂ��ł͂Ȃ��B
	virtual void updateValue();


	// ������ "= 0;" ���L�q���邱�ƂŁA�������z�֐��ƂȂ�B
	// �������z�֐��́A�p����� override �����Ȃ���΂Ȃ�Ȃ��B���g�p���Ȃ��ƃG���[�ɂȂ�Ȃ�
	virtual void updateFunc() = 0;
};

