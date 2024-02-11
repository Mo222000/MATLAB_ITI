function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "ArrayAvarage"};
	this.sidHashMap["ArrayAvarage"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "ArrayAvarage:17"};
	this.sidHashMap["ArrayAvarage:17"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Mean"] = {sid: "ArrayAvarage:9"};
	this.sidHashMap["ArrayAvarage:9"] = {rtwname: "<Root>/Mean"};
	this.rtwnameHashMap["<Root>/MinMax"] = {sid: "ArrayAvarage:5"};
	this.sidHashMap["ArrayAvarage:5"] = {rtwname: "<Root>/MinMax"};
	this.rtwnameHashMap["<Root>/MinMax1"] = {sid: "ArrayAvarage:7"};
	this.sidHashMap["ArrayAvarage:7"] = {rtwname: "<Root>/MinMax1"};
	this.rtwnameHashMap["<Root>/Sum of Elements"] = {sid: "ArrayAvarage:8"};
	this.sidHashMap["ArrayAvarage:8"] = {rtwname: "<Root>/Sum of Elements"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "ArrayAvarage:2"};
	this.sidHashMap["ArrayAvarage:2"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "ArrayAvarage:14"};
	this.sidHashMap["ArrayAvarage:14"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "ArrayAvarage:15"};
	this.sidHashMap["ArrayAvarage:15"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "ArrayAvarage:16"};
	this.sidHashMap["ArrayAvarage:16"] = {rtwname: "<Root>/Out4"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
