#include "optionnumber.h"

using namespace std;

OptionNumber::OptionNumber(double value, double min, double max, string format)
{
	_value = value;
	_min = min;
	_max = max;
	_format = format;
}

OptionNumber::OptionNumber()
{
}

void OptionNumber::init(const Json::Value &data)
{
	_value = data.get("value", 0.0).asDouble();
	_min = data.get("min", -999999.0).asDouble();
	_max = data.get("max",  999999.0).asDouble();
	_format = data.get("format", "").asString();
}

Json::Value OptionNumber::asJSON() const
{
	return Json::Value(_value);
}

void OptionNumber::set(const Json::Value &value)
{
	_value = value.asDouble();
}

Option *OptionNumber::clone() const
{
	return new OptionNumber(_value, _min, _max, _format);
}

double OptionNumber::min() const
{
	return _min;
}

double OptionNumber::max() const
{
	return _max;
}

string OptionNumber::format() const
{
	return _format;
}
