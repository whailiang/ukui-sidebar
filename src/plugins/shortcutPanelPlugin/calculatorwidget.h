#ifndef CALCULATORWIDGET_H
#define CALCULATORWIDGET_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QProcess>
#include "switchbutton.h"

#define KYLIN_CALCULATOR_NORMAL_PATH    ":/image/calculator-normal.svg"
#define KYLIN_CALCULATOR_HOVER_PATH     ":/image/calculator-hover.svg"
#define KYLIN_CALCULATOR_PRESS_PATH     ":/image/calculator-pressed.svg"

#define KYLIN_CALCULATOR_NORMAL_NAME    "kylin-calculator-normal"
#define KYLIN_CALCULATOR_HOVER_NAME     "kylin-calculator-hover"
#define KYLIN_CALCULATOR_PRESS_NAME     "kylin-calculator-pressed"

class calculatorWidget : public QWidget
{
    Q_OBJECT
public:
    explicit calculatorWidget(QWidget *parent = nullptr);
    ~calculatorWidget();
    void initMemberVariables();
    void initLayout();
private:
    QWidget       *m_pWidgetButton;
    switchButton  *m_pcalculatorButton;
    QLabel        *m_pcalculatorLabel;

    QVBoxLayout   *m_pVboxButtonLayout;
    QVBoxLayout   *m_pVboxLayout;

    QStringList  m_IconPathList;
    QStringList  m_IconNameList;
private slots:
    void calculatorButtonClickSlots();
};

#endif // CALCULATORWIDGET_H