/****************************************************************
 *  Vidalia is distributed under the following license:
 *
 *  Copyright (C) 2006,  Matt Edman, Justin Hipple
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, 
 *  Boston, MA  02110-1301, USA.
 ****************************************************************/

/** 
 * \file languagesupport.h
 * \version $Id$
 */

#ifndef _LANGUAGESUPPORT_H
#define _LANGUAGESUPPORT_H

#include <QApplication>
#include <QStringList>
#include <QMap>


class LanguageSupport
{
public:
  /** Initializes the list of supported languages. */
  static void initialize();
  /** Returns the default language code for the system locale. */
  static QString defaultLanguageCode();
  /** Returns a list of all supported language codes (e.g., "en"). */
  static QStringList languageCodes();
  /** Returns a list of all supported language names (e.g., "English"). */
  static QStringList languageNames();
  /** Returns a list of all supported language codes and names. */
  static QMap<QString, QString> languages();
  /** Sets the application's translator to the specified language. */
  static void translate(QString langCode);
};

#endif

