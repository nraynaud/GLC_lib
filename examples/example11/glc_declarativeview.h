/*
 * glc_declarativeview.h
 *
 *  Created on: 22/04/2013
 *      Author: laumaya
 */

#ifndef GLC_DECLARATIVEVIEW_H
#define GLC_DECLARATIVEVIEW_H

#include <QDeclarativeView>

class GLC_QuickView : public QDeclarativeView
{
public:
    GLC_QuickView(QWidget* pParent= NULL);
};

#endif // GLC_DECLARATIVEVIEW_H
