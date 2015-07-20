/*
 * LogTrace.h
 *
 *  Created on: Jun 30, 2015
 *      Author: heebum
 */

#pragma once

namespace LogTrace
{
	enum LOG_LEVEL
	{
		LOG_LEVEL_START	= 0,

		LOG_LEVEL_INFO,
		LOG_LEVEL_WARNING,
		LOG_LEVEL_ERROR,

		LOG_LEVEL_END
	};
}


class CLogTrace
{
public:
	__attribute__((visibility("hidden")))
	static int Initailize();

public:
	__attribute__((visibility("hidden")))
	CLogTrace();
	virtual ~CLogTrace();
};
