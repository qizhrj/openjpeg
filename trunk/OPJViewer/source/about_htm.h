wxString htmlaboutpage = wxT(
"<html>"
"<body bgcolor=#FFFFFF>"
"<table cellspacing=7 cellpadding=1 border=0 width=100%>"
"<tr>"
"<td rowspan=3 valign=top align=center width=70>"
"<img src=\"memory:opj_logo.xpm\"><br><br>"
"</td>"
"<td align=center>"
"<font size=+0 color=#000000><b>"
OPJ_APPLICATION " " OPJ_APPLICATION_VERSION
"</b></font><br>"
"<font size=-1 color=#000000><b>A JPEG 2000 image viewer</b></font><br>"
"<font size=-2 color=#000000><b>" OPJ_APPLICATION_PLATFORM " version</b></font>"
"</td>"
"</tr>"
"<tr height=3 valign=center>"
"<td valign=center  bgcolor=#cc3300></td>"
"</tr>"
"<tr>"
"<td align=justify>"
"<center><font size=+0 color=#000000><a href=\"http://www.openjpeg.org/\">OpenJPEG</a></font></center>"
"<font size=-1 color=#000000>The OpenJPEG library is an open-source JPEG 2000 codec written in C language. "
"In addition to the basic codec, various other features are under development.</font><br>"
"<font size=-2 color=red>* Build: " wxVERSION_STRING ", " __DATE__ ", " __TIME__ "</font><br>"
)
#ifdef USE_JPWL
wxT("<font size=-2 color=green>- Compiled with JPWL support</font><br>")
#endif // USE_JPWL
#ifdef USE_JPSEC
wxT("<font size=-2 color=green>- Compiled with JPSEC support</font>")
#endif // USE_JPSEC
wxT("</td>"
"</tr>"
"<tr>"
"<td colspan=2 bgcolor=#CC3300 height=3 valign=center></td>"
"</tr>"
"<tr>"
"<td colspan=2>"
"<font size=-2 color=#444444>OpenJPEG is &copy; 2002-2007 <a href=\"http://www.tele.ucl.ac.be/\">TELE</a> - <a href=\"http://www.uclouvain.be/\">Universite' Catholique de Louvain</a></font><br>"
"<font size=-2 color=#444444>OPJViewer is also &copy; 2007 <a href=\"http://dsplab.diei.unipg.it/\">DSPLab</a> - <a href=\"http://www.unipg.it/\">Universita' degli studi di Perugia</a></font>"
"</td>"
"</tr>"
"</table>"
"</body>"
"</html>"
);
