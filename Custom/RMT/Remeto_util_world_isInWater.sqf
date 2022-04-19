// Remeto_util_world_isInWater
private["_object", "_result"];
_object = _this;
_result = false;
if (((getposASL _object) select 2) < -1) then
{
	_result = true;
};
_result