/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class PPPoEConnectionUIViewController, UIActivityIndicatorView, UILabel, UIView;

@interface PPPoEViewController : AssistantSubUIViewController <TableViewManagerDelegate, UINavigationControllerDelegate> {
    UIView *containerView;
    UIView *justTextContainerView;
    UILabel *justTextLabel;
    PPPoEConnectionUIViewController *pppoeConnectionUIViewController;
    id previousNavDelegate;
    UILabel *spinnerWithStatusAdjacentLabel;
    UIActivityIndicatorView *spinnerWithStatusAdjacentSpinner;
    UIView *spinnerWithStatusAdjacentView;
}

@property(retain) PPPoEConnectionUIViewController * pppoeConnectionUIViewController;

- (void)dealloc;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)pppoeConnectionUIViewController;
- (void)setPppoeConnectionUIViewController:(id)arg1;
- (void)setupInitialTableHeaderConfiguration;
- (BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned int)arg3 toString:(id)arg4;
- (void)touchInCellAtIndexPath:(id)arg1;
- (id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned int)arg2 inCellWithTag:(int)arg3;
- (void)viewWillAppear:(BOOL)arg1;

@end
