#pragma once

#include <QListView>
#include <TrackHeaderItemDelegate.h>

class TrackHeaderListView : public QListView
{
    Q_OBJECT

public:
    explicit TrackHeaderListView(QWidget *parent = 0);
    ~TrackHeaderListView();

private:
    TrackHeaderItemDelegate mItemDelegate;
};
