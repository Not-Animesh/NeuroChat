#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_NeuroChat.h"

class NeuroChat : public QMainWindow
{
    Q_OBJECT

public:
    NeuroChat(QWidget *parent = nullptr);
    ~NeuroChat();

private:
    Ui::NeuroChatClass ui;
};

