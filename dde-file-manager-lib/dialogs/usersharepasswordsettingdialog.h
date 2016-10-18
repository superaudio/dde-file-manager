#ifndef USERSHAREPASSWORDSETTINGDIALOG_H
#define USERSHAREPASSWORDSETTINGDIALOG_H

#include <QObject>
#include <ddialog.h>
#include <dpasswordedit.h>

DWIDGET_USE_NAMESPACE

class UserSharePasswordSettingDialog : public DDialog
{
    Q_OBJECT
public:
    explicit UserSharePasswordSettingDialog(QWidget *parent = 0);
    void initUI();
    void initConnections();

signals:

public slots:
    void onButtonClicked(const int& index, const QString &text);

private:
    DPasswordEdit *m_passwordEdit;
};

#endif // USERSHAREPASSWORDSETTINGDIALOG_H
