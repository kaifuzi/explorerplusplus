// Copyright (C) Explorer++ Project
// SPDX-License-Identifier: GPL-3.0-only
// See LICENSE in the top level directory

#pragma once

#include "../Helper/StringHelper.h"

static const int DEFAULT_LISTVIEW_HOVER_TIME = 500;

struct Config
{
	Config()
	{
		showStatusBar = TRUE;
		showFolders = TRUE;
		showAddressBar = TRUE;
		showDisplayWindow = TRUE;
		showMainToolbar = TRUE;
		showBookmarksToolbar = FALSE;
		showDrivesToolbar = TRUE;
		showApplicationToolbar = FALSE;
		alwaysShowTabBar = TRUE;
		showFullTitlePath = FALSE;
		alwaysOpenNewTab = FALSE;
		showFolderSizes = FALSE;
		disableFolderSizesNetworkRemovable = FALSE;
		openNewTabNextToCurrent = FALSE;
		treeViewDelayEnabled = FALSE;
		oneClickActivate = FALSE;
		oneClickActivateHoverTime = DEFAULT_LISTVIEW_HOVER_TIME;
		showUserNameInTitleBar = FALSE;
		showPrivilegeLevelInTitleBar = FALSE;
		useFullRowSelect = FALSE;
		showFilePreviews = TRUE;
		extendTabControl = FALSE;
		allowMultipleInstances = TRUE;
		doubleClickTabClose = TRUE;
		forceSameTabWidth = FALSE;
		useLargeToolbarIcons = FALSE;
		handleZipFiles = FALSE;
		insertSorted = TRUE;
		overwriteExistingFilesConfirmation = TRUE;
		checkBoxSelection = FALSE;
		closeMainWindowOnTabClose = TRUE;
		forceSize = FALSE;
		sizeDisplayFormat = SIZE_FORMAT_BYTES;
		playNavigationSound = TRUE;
		confirmCloseTabs = FALSE;
	}

	BOOL showStatusBar;
	BOOL showFolders;
	BOOL showAddressBar;
	BOOL showDisplayWindow;
	BOOL showMainToolbar;
	BOOL showBookmarksToolbar;
	BOOL showDrivesToolbar;
	BOOL showApplicationToolbar;
	BOOL alwaysShowTabBar;
	BOOL showFullTitlePath;
	BOOL alwaysOpenNewTab;
	BOOL showFolderSizes;
	BOOL disableFolderSizesNetworkRemovable;
	BOOL openNewTabNextToCurrent;
	BOOL treeViewDelayEnabled;
	BOOL oneClickActivate;
	UINT oneClickActivateHoverTime;
	BOOL showUserNameInTitleBar;
	BOOL showPrivilegeLevelInTitleBar;
	BOOL useFullRowSelect;
	BOOL showFilePreviews;
	BOOL extendTabControl;
	BOOL allowMultipleInstances;
	BOOL doubleClickTabClose;
	BOOL forceSameTabWidth;
	BOOL useLargeToolbarIcons;
	BOOL handleZipFiles;
	BOOL insertSorted;
	BOOL overwriteExistingFilesConfirmation;
	BOOL checkBoxSelection;
	BOOL closeMainWindowOnTabClose;
	BOOL forceSize;
	SizeDisplayFormat_t sizeDisplayFormat;
	BOOL playNavigationSound;
	BOOL confirmCloseTabs;
};