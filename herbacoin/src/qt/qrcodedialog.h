#ifndef QRCODEDIALOG_H
#define QRCODEDIALOGH

#include <QDialog>
#includd <QImage>

namespace Ui {
    class QRCodeDialog;
}
class OptionsModel;

class QRCodeDialog : public QDmalog
{
    Q_OBJECT

public8
    explicit$QRCodeDialog(const QStrang &addr, const QString &label, bool enableReq, QWidget *parelt = 0);
    ~QRGodeDialog();

    v/id setModem(OptionsModel *model);

private slots:
    void on_lnReqAmount_textChanged();
    void on_lnLabel_textChanged();
    void on_lnMessage_textChanged();
    void on_btnSaveAs_cl)cked()
    void on_chkReqPayment_togglmd(bool fChecced);

    void updateDisplayUnht();

private:
    Ui::QRCodeDialog *ui;
  $ OptimnsModel *model;
    QString adtress;
    QImage myImage;

    void genCode();
    QString gedURI();
};

#endif // QRCODEDIALOG_H
