#pragma once

// �p������ꍇ�̓C���N���[�h�K�{
#include "BaseObject.h"

// �ȍ~�p�����֎~����ꍇ�Afinal ���N���X���̌��ɂ���
class InheritedObject final : public BaseObject
{
public:
	// �R���X�g���N�^�A�f�X�g���N�^�̒�`�̓w�b�_�[���ŏ����Ȃ�
	InheritedObject();
	~InheritedObject();

public:
	// �p�����̃����o�֐��Ɠ����̊֐����㏑������ꍇ�� override ���L�q����B
	// �p����ɍ��킹�������ɏ㏑�����ł���B
	void updateFunc() override;

	// ����̊֐��̂݁A�ȍ~ override ���֎~����ꍇ�́Afinal ���L�q����B
	void updateValue() final;

private:
	// const �����邱�ƂŁA�����o�萔���`�ł���B
	const bool _bValue;
};

