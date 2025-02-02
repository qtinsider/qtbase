// Copyright (C) 2017 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com, author Kevin Funk <kevin.funk@kdab.com>
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

namespace Ui
{
class MyWidget;
}

class MyWidget : public QWidget
{
    Q_OBJECT
public:
    MyWidget(QWidget *parent = nullptr);

signals:
    void someSignal();

private:
    Ui::MyWidget *ui = nullptr;
};

#endif
