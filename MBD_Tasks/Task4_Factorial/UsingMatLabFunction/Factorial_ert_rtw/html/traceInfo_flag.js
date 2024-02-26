function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["Factorial.c:38c17"]=1;
    this.traceFlag["Factorial.c:38c46"]=1;
    this.traceFlag["Factorial.c:39c22"]=1;
    this.traceFlag["Factorial.c:39c35"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Factorial.c:37"]=1;
    this.lineTraceFlag["Factorial.c:38"]=1;
    this.lineTraceFlag["Factorial.c:39"]=1;
    this.lineTraceFlag["Factorial.h:36"]=1;
    this.lineTraceFlag["Factorial.h:41"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
