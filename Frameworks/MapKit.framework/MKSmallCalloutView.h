/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSmallCalloutView : UIView <CalloutViewControllerProtocol> {
    MKCalloutBackgroundView *_calloutBackgroundView;
    UIView<_MKCalloutAccessoryView> *_detailView;
    UILayoutGuide *_detailViewBottomToBottomGuide;
    UIView<_MKCalloutAccessoryView> *_externalLeftView;
    UIView<_MKCalloutAccessoryView> *_externalRightView;
    BOOL _initialDetailViewPositioning;
    BOOL _initialLeftViewPositioning;
    BOOL _initialRightViewPositioning;
    NSMutableArray *_lastConstraints;
    UIView *_leftSpacerView;
    UIView<_MKCalloutAccessoryView> *_leftView;
    struct { 
        unsigned char timePeriod; 
        unsigned char overlayType; 
        unsigned char applicationState; 
    } _mapDisplayStyle;
    _MKSmallCalloutPassthroughButton *_maskedContainerView;
    float _maxWidth;
    BOOL _needsPreferredContentSizeUpdate;
    struct CGSize { 
        float width; 
        float height; 
    } _preferredContentSize;
    UIView *_rightSpacerView;
    UIView<_MKCalloutAccessoryView> *_rightView;
    BOOL _shouldPositionTitleForMapsTransitionMovingSideways;
    UILabel *_subtitleLabel;
    UILayoutGuide *_titleBaselineToDetailViewTopGuide;
    UILabel *_titleLabel;
    UIView *_unmaskedContainerView;
}

@property (nonatomic, retain) MKCalloutBackgroundView *calloutBackgroundView;
@property (nonatomic, copy) NSString *calloutSubtitle;
@property (nonatomic, copy) NSString *calloutTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *detailView;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIView *leftView;
@property (nonatomic) struct { unsigned char x1; unsigned char x2; unsigned char x3; } mapDisplayStyle;
@property (nonatomic) float maximumWidth;
@property (getter=_preferredContentSize, nonatomic, readonly) struct CGSize { float x1; float x2; } preferredContentSize;
@property (nonatomic, retain) UIView *rightView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_maskedContainerView;
- (struct CGSize { float x1; float x2; })_preferredContentSize;
- (void)_setNeedsUpdatePreferredContentSize;
- (BOOL)_shouldCenterDetailView;
- (id)_subtitleLabel;
- (void)_updateAccessoryViewStyles;
- (void)_updatePreferredContentSize;
- (void)_updatePreferredContentSizeIfNeeded;
- (void)beginMapsTransitionMovingSideways;
- (id)calloutBackgroundView;
- (id)calloutSubtitle;
- (id)calloutTitle;
- (BOOL)canDisplayCompleteTitleWhenExpanded;
- (void)dealloc;
- (id)detailView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)leftView;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; })mapDisplayStyle;
- (float)maximumWidth;
- (void)reset;
- (id)rightView;
- (void)setCalloutBackgroundView:(id)arg1;
- (void)setCalloutSubtitle:(id)arg1;
- (void)setCalloutSubtitle:(id)arg1 animated:(BOOL)arg2;
- (void)setCalloutTitle:(id)arg1;
- (void)setDetailView:(id)arg1;
- (void)setDetailView:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftView:(id)arg1;
- (void)setLeftView:(id)arg1 animated:(BOOL)arg2;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; })arg1;
- (void)setMaximumWidth:(float)arg1;
- (void)setRightView:(id)arg1;
- (void)setRightView:(id)arg1 animated:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)updateConstraints;

@end
