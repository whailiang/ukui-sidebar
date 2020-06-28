#ifndef PADWIDGET_H
#define PADWIDGET_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include "switchbutton.h"

#define KYLIN_PAD_NORMAL_NAME           "kylin-pad-normal"
#define KYLIN_PAD_HOVER_NAME            "kylin-pad-hover"
#define KYLIN_PAD_PRESS_NAME            "kylin-pad-pressed"

#define KYLIN_PAD_NORMAL_PATH           ":/image/pad-normal.svg"
#define KYLIN_PAD_HOVER_PATH            ":/image/pad-hover.svg"
#define KYLIN_PAD_PRESS_PATH            ":/image/pad-pressed.svg"

class padWidget : public QWidget
{
    Q_OBJECT
public:
    explicit padWidget(QWidget *parent = nullptr);
    ~padWidget();
    void initMemberVariables();
    void initLayout();

private:
    QWidget       *m_pWidgetButton;
    switchButton  *m_pPadButton;
    QLabel        *m_pPadLabel;

    QVBoxLayout   *m_pVboxButtonLayout;
    QVBoxLayout   *m_pVboxLayout;

    QStringList  m_IconPathList;
    QStringList  m_IconNameList;
};

#endif // PADWIDGET_H