/****************************************************************************************
 * Copyright (c) 2010-2012 Leo Franchi <lfranchi@kde.org>                               *
 *                                                                                      *
 * This program is free software; you can redistribute it and/or modify it under        *
 * the terms of the GNU General Public License as published by the Free Software        *
 * Foundation; either version 2 of the License, or (at your option) any later           *
 * version.                                                                             *
 *                                                                                      *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY      *
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A      *
 * PARTICULAR PURPOSE. See the GNU General Public License for more details.             *
 *                                                                                      *
 * You should have received a copy of the GNU General Public License along with         *
 * this program.  If not, see <http://www.gnu.org/licenses/>.                           *
 ****************************************************************************************/

#ifndef ECHONEST_PLAYLIST_TEST_H
#define ECHONEST_PLAYLIST_TEST_H

#include <QtTest/QtTest>

class PlaylistTest : public QObject
{
    Q_OBJECT
private slots:
    void initTestCase();

    void testStatic1();
    void testStatic2();
    void testStaticArtistYears();
    void testStaticWithSongType();
    void testStaticXSPF();
    void testStaticWithSpecialChars();
    void testDynamic1();
    void testDynamic2();
    void testNewDynamicAPI();
    void testDynamicChainXSPF();

    void testGenreRadio();
    void testAudioSummaryAttributes();
    void testGenrePresets();
    void testDistribution();
};

#endif
