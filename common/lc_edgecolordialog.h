#pragma once

#include <QtWidgets>

class lcAutomateEdgeColorDialog : public QDialog
{
	Q_OBJECT
public:
	lcAutomateEdgeColorDialog(QWidget *Parent);
	quint32 mStudColor;
	quint32 mStudEdgeColor;
	float mPartEdgeContrast;
	float mPartEdgeGamma;
	float mPartColorValueLDIndex;

protected slots:
	void SliderValueChanged(int);
	void ColorButtonClicked();
	void ResetColorButtonClicked();

protected:
	QSlider* PartEdgeGammaSlider;
	QSlider* PartColorValueLDIndexSlider;
	QSlider* PartEdgeContrastSlider;

	QToolButton* StudColorButton;
	QToolButton* StudEdgeColorButton;
	QToolButton* ResetStudColorButton;
	QToolButton* ResetStudEdgeColorButton;

	QLabel* PartEdgeContrast;
	QLabel* PartEdgeGamma;
	QLabel* PartColorValueLDIndex;
};

