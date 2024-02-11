function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Calculator"};
	this.sidHashMap["Calculator"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Calculator:24"};
	this.sidHashMap["Calculator:24"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "Calculator:23"};
	this.sidHashMap["Calculator:23"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "Calculator:1"};
	this.sidHashMap["Calculator:1"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "Calculator:2"};
	this.sidHashMap["Calculator:2"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/In3"] = {sid: "Calculator:3"};
	this.sidHashMap["Calculator:3"] = {rtwname: "<Root>/In3"};
	this.rtwnameHashMap["<Root>/Add"] = {sid: "Calculator:4"};
	this.sidHashMap["Calculator:4"] = {rtwname: "<Root>/Add"};
	this.rtwnameHashMap["<Root>/Decrement To Zero"] = {sid: "Calculator:24"};
	this.sidHashMap["Calculator:24"] = {rtwname: "<Root>/Decrement To Zero"};
	this.rtwnameHashMap["<Root>/Divide"] = {sid: "Calculator:6"};
	this.sidHashMap["Calculator:6"] = {rtwname: "<Root>/Divide"};
	this.rtwnameHashMap["<Root>/Increment Stored Integer"] = {sid: "Calculator:23"};
	this.sidHashMap["Calculator:23"] = {rtwname: "<Root>/Increment Stored Integer"};
	this.rtwnameHashMap["<Root>/Product"] = {sid: "Calculator:9"};
	this.sidHashMap["Calculator:9"] = {rtwname: "<Root>/Product"};
	this.rtwnameHashMap["<Root>/Subtract"] = {sid: "Calculator:8"};
	this.sidHashMap["Calculator:8"] = {rtwname: "<Root>/Subtract"};
	this.rtwnameHashMap["<Root>/Unary Minus"] = {sid: "Calculator:7"};
	this.sidHashMap["Calculator:7"] = {rtwname: "<Root>/Unary Minus"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "Calculator:26"};
	this.sidHashMap["Calculator:26"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "Calculator:27"};
	this.sidHashMap["Calculator:27"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "Calculator:28"};
	this.sidHashMap["Calculator:28"] = {rtwname: "<Root>/Out4"};
	this.rtwnameHashMap["<Root>/Out5"] = {sid: "Calculator:29"};
	this.sidHashMap["Calculator:29"] = {rtwname: "<Root>/Out5"};
	this.rtwnameHashMap["<Root>/Out6"] = {sid: "Calculator:30"};
	this.sidHashMap["Calculator:30"] = {rtwname: "<Root>/Out6"};
	this.rtwnameHashMap["<Root>/Out7"] = {sid: "Calculator:31"};
	this.sidHashMap["Calculator:31"] = {rtwname: "<Root>/Out7"};
	this.rtwnameHashMap["<Root>/Out8"] = {sid: "Calculator:32"};
	this.sidHashMap["Calculator:32"] = {rtwname: "<Root>/Out8"};
	this.rtwnameHashMap["<S1>/u"] = {sid: "Calculator:24:1"};
	this.sidHashMap["Calculator:24:1"] = {rtwname: "<S1>/u"};
	this.rtwnameHashMap["<S1>/FixPt Constant"] = {sid: "Calculator:24:2"};
	this.sidHashMap["Calculator:24:2"] = {rtwname: "<S1>/FixPt Constant"};
	this.rtwnameHashMap["<S1>/FixPt Data Type Duplicate"] = {sid: "Calculator:24:3"};
	this.sidHashMap["Calculator:24:3"] = {rtwname: "<S1>/FixPt Data Type Duplicate"};
	this.rtwnameHashMap["<S1>/FixPt Relational Operator3"] = {sid: "Calculator:24:4"};
	this.sidHashMap["Calculator:24:4"] = {rtwname: "<S1>/FixPt Relational Operator3"};
	this.rtwnameHashMap["<S1>/FixPt Sum1"] = {sid: "Calculator:24:5"};
	this.sidHashMap["Calculator:24:5"] = {rtwname: "<S1>/FixPt Sum1"};
	this.rtwnameHashMap["<S1>/FixPt Switch4"] = {sid: "Calculator:24:6"};
	this.sidHashMap["Calculator:24:6"] = {rtwname: "<S1>/FixPt Switch4"};
	this.rtwnameHashMap["<S1>/Ground1"] = {sid: "Calculator:24:7"};
	this.sidHashMap["Calculator:24:7"] = {rtwname: "<S1>/Ground1"};
	this.rtwnameHashMap["<S1>/y"] = {sid: "Calculator:24:8"};
	this.sidHashMap["Calculator:24:8"] = {rtwname: "<S1>/y"};
	this.rtwnameHashMap["<S2>/u"] = {sid: "Calculator:23:1"};
	this.sidHashMap["Calculator:23:1"] = {rtwname: "<S2>/u"};
	this.rtwnameHashMap["<S2>/FixPt Constant"] = {sid: "Calculator:23:2"};
	this.sidHashMap["Calculator:23:2"] = {rtwname: "<S2>/FixPt Constant"};
	this.rtwnameHashMap["<S2>/FixPt Data Type Duplicate"] = {sid: "Calculator:23:3"};
	this.sidHashMap["Calculator:23:3"] = {rtwname: "<S2>/FixPt Data Type Duplicate"};
	this.rtwnameHashMap["<S2>/FixPt Data Type Propagation"] = {sid: "Calculator:23:4"};
	this.sidHashMap["Calculator:23:4"] = {rtwname: "<S2>/FixPt Data Type Propagation"};
	this.rtwnameHashMap["<S2>/FixPt Gateway In"] = {sid: "Calculator:23:5"};
	this.sidHashMap["Calculator:23:5"] = {rtwname: "<S2>/FixPt Gateway In"};
	this.rtwnameHashMap["<S2>/FixPt Sum1"] = {sid: "Calculator:23:6"};
	this.sidHashMap["Calculator:23:6"] = {rtwname: "<S2>/FixPt Sum1"};
	this.rtwnameHashMap["<S2>/y"] = {sid: "Calculator:23:7"};
	this.sidHashMap["Calculator:23:7"] = {rtwname: "<S2>/y"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
