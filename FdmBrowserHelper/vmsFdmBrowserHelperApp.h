/*
  Free Download Manager Copyright (c) 2003-2016 FreeDownloadManager.ORG
*/

#pragma once
class vmsFdmBrowserHelperApp
{
public:
	vmsFdmBrowserHelperApp ();
	~vmsFdmBrowserHelperApp ();
	int run ();

protected:
	bool m_buggyBrowser = false;
};

