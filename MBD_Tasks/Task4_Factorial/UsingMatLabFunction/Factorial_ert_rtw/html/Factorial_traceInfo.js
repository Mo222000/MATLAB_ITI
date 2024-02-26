function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Factorial"};
	this.sidHashMap["Factorial"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Factorial:33"};
	this.sidHashMap["Factorial:33"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "Factorial:34"};
	this.sidHashMap["Factorial:34"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/MATLAB Function"] = {sid: "Factorial:33"};
	this.sidHashMap["Factorial:33"] = {rtwname: "<Root>/MATLAB Function"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Factorial:35"};
	this.sidHashMap["Factorial:35"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "Factorial:33:1"};
	this.sidHashMap["Factorial:33:1"] = {rtwname: "<S1>:1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
