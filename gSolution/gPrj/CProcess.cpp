// CProcess.cpp: 구현 파일
//

#include "pch.h"
#include "gPrj.h"
#include "CProcess.h"


// CProcess

CProcess::CProcess()
{
}

CProcess::~CProcess()
{
}

int CProcess::getStarInfo(CImage *pImage, int nTh)
{
	unsigned char* fm = (unsigned char*)pImage->GetBits();
	int nWidth = pImage->GetWidth();
	int nHeight = pImage->GetHeight();
	int nPitch = pImage->GetPitch();

	int nSum = 0;
	for (int k = 0; k < nWidth*nHeight; k++) {	// 메모리의 영역까지의 배열 모두 중 100보다 큰 값을 확인
		if (fm[k] > nTh) {
			nSum++;
		}
	}
	return nSum;
}

// CProcess 멤버 함수
