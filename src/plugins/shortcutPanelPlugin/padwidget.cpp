#include "padwidget.h"

padWidget::padWidget(QWidget *parent) : QWidget(parent)
{
    initMemberVariables();
    initLayout();
}

padWidget::~padWidget()
{

}

void padWidget::initMemberVariables()
{
    m_IconPathList << KYLIN_PAD_NORMAL_PATH << KYLIN_PAD_HOVER_PATH << KYLIN_PAD_PRESS_PATH;
    m_IconNameList << KYLIN_PAD_NORMAL_NAME << KYLIN_PAD_HOVER_NAME << KYLIN_PAD_PRESS_NAME;

    m_pWidgetButton         = new QWidget();
    m_pWidgetButton->setFixedSize(62, 62);
    m_pWidgetButton->setContentsMargins(0, 0, 0, 0);
    m_pVboxButtonLayout     = new QVBoxLayout();
    m_pVboxButtonLayout->setContentsMargins(0, 0, 0, 0);

    m_pPadButton = new switchButton(m_IconPathList, m_IconNameList);
    m_pPadButton->setFixedSize(62, 62);
    m_pPadButton->setIconSize(QSize(32, 32));

    m_pPadLabel = new QLabel(QObject::tr("平板模式"));
//    m_pPadLabel->setFixedSize(80, 16);
    m_pPadLabel->setAlignment(Qt::AlignHCenter);

    m_pVboxLayout = new QVBoxLayout();
    m_pVboxLayout->setContentsMargins(0, 0, 0, 0);
    m_pVboxLayout->setSpacing(0);

    this->setFixedSize(80, 93);
    this->setContentsMargins(0, 0, 0, 0);
    return;
}

void padWidget::initLayout()
{
    m_pVboxButtonLayout->addWidget(m_pPadButton, 0, Qt::AlignCenter);
    m_pWidgetButton->setLayout(m_pVboxButtonLayout);
    m_pVboxLayout->addWidget(m_pWidgetButton, 0, Qt::AlignCenter);
    m_pVboxLayout->addItem(new QSpacerItem(15, 10));
    m_pVboxLayout->addWidget(m_pPadLabel);
    this->setLayout(m_pVboxLayout);
    return;
}