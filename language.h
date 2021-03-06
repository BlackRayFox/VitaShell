/*
  VitaShell
  Copyright (C) 2015-2018, TheFloW

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __LANGUAGE_H__
#define __LANGUAGE_H__

enum LanguageContainer {
  // General strings
  ERROR,
  OK,
  YES,
  NO,
  CANCEL,
  ON,
  OFF,
  FILE_,
  FOLDER,

  // Progress strings
  MOVING,
  COPYING,
  DELETING,
  EXPORTING,
  INSTALLING,
  DOWNLOADING,
  EXTRACTING,
  COMPRESSING,
  HASHING,
  REFRESHING,
  SENDING,
  RECEIVING,

  // Audio player strings
  TITLE,
  ALBUM,
  ARTIST,
  GENRE,
  YEAR,

  // Hex editor strings
  OFFSET,
  OPEN_HEX_EDITOR,

  // Text editor strings
  EDIT_LINE,
  ENTER_SEARCH_TERM,

  // Context menu strings
  REFRESH_LIVEAREA,
  REFRESH_LICENSE_DB,
  MOUNT_UMA0,
  MOUNT_IMC0,
  MOUNT_USB_UX0,
  UMOUNT_USB_UX0,
  SORT_BY,
  BY_NAME,
  BY_SIZE,
  BY_DATE,
  MARK_ALL,
  UNMARK_ALL,
  MOVE,
  COPY,
  PASTE,
  DELETE,
  RENAME,
  NEW_FOLDER,
  PROPERTIES,
  SEND,
  RECEIVE,
  MORE,
  COMPRESS,
  INSTALL_ALL,
  INSTALL_FOLDER,
  CALCULATE_SHA1,
  OPEN_DECRYPTED,
  EXPORT_MEDIA,
  CUT,
  INSERT_EMPTY_LINE,
  SEARCH,

  // File browser properties strings
  PROPERTY_NAME,
  PROPERTY_TYPE,
  PROPERTY_FSELF_MODE,
  PROPERTY_SIZE,
  PROPERTY_COMPRESSED_SIZE,
  PROPERTY_CONTAINS,
  PROPERTY_CONTAINS_FILES_FOLDERS,
  PROPERTY_CREATION_DATE,
  PROPERTY_MODFICATION_DATE,
  PROPERTY_TYPE_ARCHIVE,
  PROPERTY_TYPE_BMP,
  PROPERTY_TYPE_INI,
  PROPERTY_TYPE_JPEG,
  PROPERTY_TYPE_MP3,
  PROPERTY_TYPE_OGG,
  PROPERTY_TYPE_PNG,
  PROPERTY_TYPE_SFO,
  PROPERTY_TYPE_TXT,
  PROPERTY_TYPE_VPK,
  PROPERTY_TYPE_XML,
  PROPERTY_TYPE_FSELF,
  PROPERTY_FSELF_MODE_SAFE,
  PROPERTY_FSELF_MODE_UNSAFE,
  PROPERTY_FSELF_MODE_SCE,

  // File browser strings
  REFRESHED,
  COPIED_FILE,
  COPIED_FOLDER,
  COPIED_FILES_FOLDERS,
  IMPORTED_LICENSES,

  // Dialog questions
  DELETE_FILE_QUESTION,
  DELETE_FOLDER_QUESTION,
  DELETE_FILES_FOLDERS_QUESTION,
  EXPORT_FILE_QUESTION,
  EXPORT_FOLDER_QUESTION,
  EXPORT_FILES_FOLDERS_QUESTION,
  EXPORT_NO_MEDIA,
  EXPORT_SONGS_INFO,
  EXPORT_VIDEOS_INFO,
  EXPORT_PICTURES_INFO,
  EXPORT_SONGS_VIDEOS_INFO,
  EXPORT_SONGS_PICTURES_INFO,
  EXPORT_VIDEOS_PICTURES_INFO,
  EXPORT_SONGS_VIDEOS_PICTURES_INFO,
  INSTALL_ALL_QUESTION,
  INSTALL_FOLDER_QUESTION,
  INSTALL_QUESTION,
  INSTALL_WARNING,
  INSTALL_BRICK_WARNING,
  HASH_FILE_QUESTION,
  SAVE_MODIFICATIONS,
  REFRESH_LIVEAREA_QUESTION,
  REFRESH_LICENSE_DB_QUESTION,

  // HENkaku settings strings
  HENKAKU_SETTINGS,
  HENKAKU_ENABLE_PSN_SPOOFING,
  HENKAKU_ENABLE_UNSAFE_HOMEBREW,
  HENKAKU_ENABLE_VERSION_SPOOFING,
  HENKAKU_SPOOFED_VERSION,
  HENKAKU_RESTORE_DEFAULT_SETTINGS,
  HENKAKU_RELOAD_CONFIG,
  HENKAKU_RESTORE_DEFAULT_MESSAGE,
  HENKAKU_RELOAD_CONFIG_MESSAGE,
  HENKAKU_UNSAFE_HOMEBREW_MESSAGE,

  // VitaShell settings
  VITASHELL_SETTINGS_MAIN,
  VITASHELL_SETTINGS_LANGUAGE,
  VITASHELL_SETTINGS_THEME,
  VITASHELL_SETTINGS_USBDEVICE,
  VITASHELL_SETTINGS_SELECT_BUTTON,
  VITASHELL_SETTINGS_NO_AUTO_UPDATE,
  VITASHELL_SETTINGS_RESTART_SHELL,
  VITASHELL_SETTINGS_POWER,
  VITASHELL_SETTINGS_REBOOT,
  VITASHELL_SETTINGS_POWEROFF,
  VITASHELL_SETTINGS_STANDBY,
  VITASHELL_SETTINGS_USB_MEMORY_CARD,
  VITASHELL_SETTINGS_USB_GAME_CARD,
  VITASHELL_SETTINGS_USB_SD2VITA,
  VITASHELL_SETTINGS_USB_PSVSD,
  VITASHELL_SETTINGS_SELECT_BUTTON_USB,
  VITASHELL_SETTINGS_SELECT_BUTTON_FTP,

  // USB strings
  USB_CONNECTED,
  USB_NOT_CONNECTED,
  USB_CONNECTION_NOT_AVAILABLE,
  USB_WAIT_ATTACH,
  USB_UMA0_MOUNTED,
  USB_UX0_MOUNTED,
  USB_UX0_UMOUNTED,
  
  // QR strings
  QR_SCANNING,
  QR_OPEN_WEBSITE,
  QR_SHOW_CONTENTS,
  QR_CONFIRM_INSTALL,
  QR_CONFIRM_DOWNLOAD,

  // Adhoc strings
  ADHOC_RECEIVE_SEARCHING_PSVITA,
  ADHOC_SELECT_PSVITA,
  ADHOC_RECEIVE_QUESTION,
  ADHOC_CLIENT_DECLINED,

  // Others
  IMC0_MOUNTED,
  SAFE_MODE,
  UNSAFE_MODE,
  PLEASE_WAIT,
  MEMORY_CARD_NOT_FOUND,
  GAME_CARD_NOT_FOUND,
  MICROSD_NOT_FOUND,
  NO_SPACE_ERROR,
  EXTENDED_PERMISSIONS_REQUIRED,
  WIFI_ERROR,
  FTP_SERVER,
  UPDATE_QUESTION,
  ARCHIVE_NAME,
  COMPRESSION_LEVEL,
  ENTER_PASSWORD,
  
  LANGUAGE_CONTAINER_SIZE,
};

extern char *language_container[LANGUAGE_CONTAINER_SIZE];

void freeLanguageContainer();
void loadLanguage(int id);

#endif
