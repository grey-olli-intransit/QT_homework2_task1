#include "insertspecialsymbol.h"

InsertSpecialSymbol::InsertSpecialSymbol()
{
}

bool InsertSpecialSymbol::insertSpecialSymbol(QString & str)
{
  constexpr const char roubleSym[4]  = "₽";
  constexpr const char euroSym[4] = "€";
  constexpr const char promilleSym[4] = "‰";
  constexpr const char trademarkSym[4] = "®";
  constexpr const char roubleMark[7] = "#@RUB@";
  constexpr const char euroMark[7] = "#@EUR@";
  constexpr const char promilleMark[7] = "#@PRM@";
  constexpr const char trademarkMark[7] = "#@TRM@";

  QString roubleSymQ = roubleSym;
  QString euroSymQ = euroSym;
  QString promilleSymQ = promilleSym;
  QString trademarkSymQ = trademarkSym;
  QString roubleMarkQ = roubleMark;
  QString euroMarkQ = euroMark;
  QString promilleMarkQ = promilleMark;
  QString trademarkMarkQ = trademarkMark;



  QStringList editorMarks;
  editorMarks << roubleMarkQ \
              << euroMarkQ \
              << promilleMarkQ \
              << trademarkMarkQ ;

  QStringList replSymbols;
  replSymbols << roubleSymQ \
              << euroSymQ \
              << promilleSymQ \
              << trademarkSymQ ;


  bool found=false;

  QString textAsStr=str;
  QStringList buffer;
  buffer << textAsStr;
  for (int i=0;i<4;i++) {
    if (str.contains(editorMarks[i],Qt::CaseSensitive)) {
    buffer.replaceInStrings(editorMarks[i],replSymbols[i], Qt::CaseInsensitive);
    found=true;
    }
  }
  str = buffer[0];
  return found;
}
