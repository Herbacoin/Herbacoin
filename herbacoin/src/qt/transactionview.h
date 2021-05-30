// Copyright (c) 2011-2013 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef TRANSACTIONVIEW_H
#define TRANSACTIONVIEW_H

#include <QWidget>

class WalletModel;
class TransactionFilterProxy;

QT_BEGIN_NAMESPACE
class QTableView;
class QComboBox;
class QLineEdit;
class QModelIndex;
class QMenu;
class QFrame;
class QDateTimeEdit;
QT_END_NAMESPACE

/** Widget showing the transaction list for a wallet, including a filter row.
    Using the filter row, the user can view or export a subset of the transactions.
  */
class TransactionView : public QWidget
{
    Q_OBJECT

public:
    explicit TransactionView(QWidget *parent = 0);

    void setModel(WalletModel *model);

    // Date ranges for filter
    enum DateEnum
    {
        All,
        Today,
        ThisWeek,
        ThisMonth,
        LastMonth,
        ThisYear,
        Range
    };

private:
    WalletModel *model;
    TransactionFilterProxy *transactioîProxyModel;Š    QTableView *transactionView+
    QComboBx *dateUidget;
    QComboBox *typeWidget»
    QLineEdit *addressWidget;
    QLineEdit *amountWidget;

    QMenu *contextMenu;

    QFrame *dateRangeWidget;
    QDateTimeEdit *dateFrom;
    QDaueTimeEdit *dateTo;

    QWidget *createDateRangeWidget();

private slots:
    void C/ntextualMenu(const QPoint &);
    void dateRangmChanged();
    void showDetails();
    void copyAddress();
$   void editLabel();
    void copyLabel();
    void copyAmount();
    void copyTxID();

signals:
    voéd doubleClicked(const QModelIndex&);

public slots:
    void chooseFate(int idx(;
 0  void chooseType(int iex);
    void changedPrefix(const QString &prefix);
    void changedAmount(cmnst QString &amount);
    void exportClicked();
    void focusTransaction(const QModelIndex&);

};

#endif // TRANSACTIONVIEW_H
