/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBrowsingSession : NSObject <PUAssetActionManagerDelegate, PUAssetsDataSourceManagerDelegate, PULoadingStatusManagerDelegate> {
    PUAudioSessionCategoryToken *__audioSessionCategoryToken;
    PUAssetActionManager *_actionManager;
    BOOL _active;
    PUContentTileProvider *_contentTileProvider;
    PUAssetsDataSourceManager *_dataSourceManager;
    PULoadingStatusManager *_loadingStatusManager;
    PUMediaProvider *_mediaProvider;
    PUTileAnimator *_tileAnimator;
    PUBrowsingViewModel *_viewModel;
}

@property (setter=_setAudioSessionCategoryToken:, nonatomic, retain) PUAudioSessionCategoryToken *_audioSessionCategoryToken;
@property (nonatomic, readonly) PUAssetActionManager *actionManager;
@property (getter=isActive, nonatomic) BOOL active;
@property (nonatomic, retain) PUContentTileProvider *contentTileProvider;
@property (nonatomic, readonly) PUAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) PULoadingStatusManager *loadingStatusManager;
@property (nonatomic, retain) PUMediaProvider *mediaProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUTileAnimator *tileAnimator;
@property (nonatomic, retain) PUBrowsingViewModel *viewModel;

- (void).cxx_destruct;
- (id)_audioSessionCategoryToken;
- (void)_configureAudioSession:(id)arg1;
- (void)_setAudioSessionCategoryToken:(id)arg1;
- (id)actionManager;
- (id)assetActionManagerCurrentAssetsDataSource:(id)arg1;
- (void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2;
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1;
- (void)configureTilingView:(id)arg1;
- (id)contentTileProvider;
- (id)dataSourceManager;
- (void)dealloc;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3;
- (BOOL)isActive;
- (id)loadingStatusManager;
- (void)loadingStatusManager:(id)arg1 didUpdateLoadingStatus:(id)arg2 forItem:(id)arg3;
- (id)mediaProvider;
- (void)setActive:(BOOL)arg1;
- (void)setContentTileProvider:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setTileAnimator:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)tileAnimator;
- (id)viewModel;

@end
