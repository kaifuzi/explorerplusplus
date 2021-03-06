// Copyright (C) Explorer++ Project
// SPDX-License-Identifier: GPL-3.0-only
// See LICENSE in the top level directory

/*
 * Switches events based on the currently selected window
 * (principally the listview and treeview).
 */

#include "stdafx.h"
#include "Explorer++.h"

void Explorerplusplus::OnCopyItemPath(void) const
{
	HWND hFocus;

	hFocus = GetFocus();

	if(hFocus == m_hActiveListView)
	{
		OnListViewCopyItemPath();
	}
	else if(hFocus == m_hTreeView)
	{
		OnTreeViewCopyItemPath();
	}
}

void Explorerplusplus::OnCopyUniversalPaths(void) const
{
	HWND hFocus;

	hFocus = GetFocus();

	if(hFocus == m_hActiveListView)
	{
		OnListViewCopyUniversalPaths();
	}
	else if(hFocus == m_hTreeView)
	{
		OnTreeViewCopyUniversalPaths();
	}
}

void Explorerplusplus::OnCopy(BOOL bCopy)
{
	HWND hFocus;

	hFocus = GetFocus();

	if(hFocus == m_hActiveListView)
	{
		OnListViewCopy(bCopy);
	}
	else if(hFocus == m_hTreeView)
	{
		OnTreeViewCopy(bCopy);
	}
}

void Explorerplusplus::OnFileRename(void)
{
	HWND	hFocus;

	if(m_bListViewRenaming)
	{
		SendMessage(ListView_GetEditControl(m_hActiveListView),
			WM_APP_KEYDOWN,VK_F2,0);
	}
	else
	{
		hFocus = GetFocus();

		if(hFocus == m_hActiveListView)
		{
			OnListViewFileRename();
		}
		else if(hFocus == m_hTreeView)
		{
			OnTreeViewFileRename();
		}
	}
}

void Explorerplusplus::OnFileDelete(BOOL bPermanent)
{
	HWND hFocus;

	hFocus = GetFocus();

	if(hFocus == m_hActiveListView)
	{
		OnListViewFileDelete(bPermanent);
	}
	else if(hFocus == m_hTreeView)
	{
		OnTreeViewFileDelete(bPermanent);
	}
}

void Explorerplusplus::OnSetFileAttributes(void) const
{
	HWND hFocus;

	hFocus = GetFocus();

	if(hFocus == m_hActiveListView)
	{
		OnListViewSetFileAttributes();
	}
	else if(hFocus == m_hTreeView)
	{
		OnTreeViewSetFileAttributes();
	}
}

void Explorerplusplus::OnShowFileProperties(void) const
{
	HWND hFocus;

	hFocus = GetFocus();

	if(hFocus == m_hActiveListView)
	{
		OnListViewShowFileProperties();
	}
	else if(hFocus == m_hTreeView)
	{
		OnTreeViewShowFileProperties();
	}
}

void Explorerplusplus::OnRightClick(NMHDR *nmhdr)
{
	if(nmhdr->hwndFrom == m_hActiveListView)
	{
		POINT CursorPos;
		DWORD dwPos;

		dwPos = GetMessagePos();
		CursorPos.x = GET_X_LPARAM(dwPos);
		CursorPos.y = GET_Y_LPARAM(dwPos);

		OnListViewRClick(&CursorPos);
	}
	else if(nmhdr->hwndFrom == ListView_GetHeader(m_hActiveListView))
	{
		/* The header on the active listview was right-clicked. */
		POINT CursorPos;
		DWORD dwPos;

		dwPos = GetMessagePos();
		CursorPos.x = GET_X_LPARAM(dwPos);
		CursorPos.y = GET_Y_LPARAM(dwPos);

		OnListViewHeaderRClick(&CursorPos);
	}
	else if(nmhdr->hwndFrom == m_mainToolbar->GetHWND())
	{
		OnMainToolbarRClick();
	}
}

void Explorerplusplus::OnPaste(void)
{
	HWND hFocus;

	hFocus = GetFocus();

	if(hFocus == m_hActiveListView)
	{
		OnListViewPaste();
	}
	else if(hFocus == m_hTreeView)
	{
		OnTreeViewPaste();
	}
}