// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#pragma once


/**
 * An implementation of byte property sections
 */
class FBytePropertySection
	: public FPropertySection
{
public:
	FBytePropertySection(UMovieSceneSection& InSectionObject, const FText& InSectionName, UEnum* InEnum)
		: FPropertySection(InSectionObject, InSectionName)
		, Enum( InEnum )
	{ }

public:

	// FPropertySection interface

	virtual void GenerateSectionLayout(class ISectionLayoutBuilder& LayoutBuilder) const override;
	virtual void SetIntermediateValue(FPropertyChangedParams PropertyChangedParams) override;
	virtual void ClearIntermediateValue() override;

private:

	mutable TSharedPtr<FByteKeyArea> KeyArea;
	UEnum* Enum;
};