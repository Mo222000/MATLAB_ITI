function CodeDefine() { 
this.def = new Array();
this.def["ert_main.c:GradingSystem_M_"] = {file: "ert_main_c.html",line:23,type:"var"};
this.def["ert_main.c:GradingSystem_MPtr"] = {file: "ert_main_c.html",line:24,type:"var"};
this.def["ert_main.c:GradingSystem_U_In1"] = {file: "ert_main_c.html",line:27,type:"var"};
this.def["ert_main.c:GradingSystem_Y_Out1"] = {file: "ert_main_c.html",line:30,type:"var"};
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:44,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:81,type:"fcn"};
this.def["GradingSystem_step"] = {file: "GradingSystem_c.html",line:22,type:"fcn"};
this.def["GradingSystem_initialize"] = {file: "GradingSystem_c.html",line:98,type:"fcn"};
this.def["GradingSystem_terminate"] = {file: "GradingSystem_c.html",line:116,type:"fcn"};
this.def["ConstB_GradingSystem_T"] = {file: "GradingSystem_h.html",line:47,type:"type"};
this.def["RT_MODEL_GradingSystem_T"] = {file: "GradingSystem_types_h.html",line:24,type:"type"};
this.def["GradingSystem_ConstB"] = {file: "GradingSystem_data_c.html",line:22,type:"var"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:55,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:56,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:69,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:70,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:88,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["GradingSystem_c.html"] = "../GradingSystem.c";
	this.html2Root["GradingSystem_c.html"] = "GradingSystem_c.html";
	this.html2SrcPath["GradingSystem_h.html"] = "../GradingSystem.h";
	this.html2Root["GradingSystem_h.html"] = "GradingSystem_h.html";
	this.html2SrcPath["GradingSystem_private_h.html"] = "../GradingSystem_private.h";
	this.html2Root["GradingSystem_private_h.html"] = "GradingSystem_private_h.html";
	this.html2SrcPath["GradingSystem_types_h.html"] = "../GradingSystem_types.h";
	this.html2Root["GradingSystem_types_h.html"] = "GradingSystem_types_h.html";
	this.html2SrcPath["GradingSystem_data_c.html"] = "../GradingSystem_data.c";
	this.html2Root["GradingSystem_data_c.html"] = "GradingSystem_data_c.html";
	this.html2SrcPath["rt_defines_h.html"] = "../rt_defines.h";
	this.html2Root["rt_defines_h.html"] = "rt_defines_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","GradingSystem_c.html","GradingSystem_h.html","GradingSystem_private_h.html","GradingSystem_types_h.html","GradingSystem_data_c.html","rt_defines_h.html","rtwtypes_h.html"];
