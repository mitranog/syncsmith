#pragma once

#include <QWidget>

class Track;

class FloatTrackEditor : public QWidget
{
    Q_OBJECT

public:
    explicit FloatTrackEditor(Track* inTrack, QWidget *parent = 0);
    ~FloatTrackEditor() {}

    Track* track(void) const { return mTrack; }
    void setTrack(Track* inTrack) { mTrack = inTrack; }

private:
    void paintEvent(QPaintEvent * event);
    void mousePressEvent(QMouseEvent *event);

    Track* mTrack;

signals:
    void editingFinished();

};